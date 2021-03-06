--TEST--
Timeout within array_walk
--SKIPIF--
<?php
	if (getenv("SKIP_SLOW_TESTS")) die("skip slow test");
?>
--FILE--
<?php

include __DIR__ . DIRECTORY_SEPARATOR . "timeout_config.inc";

set_time_limit($t);

function cb(&$i, $k, $p)
{
	busy_wait(1);
}

$startTime = microtime(true);

$a = array(1 => 1, 2 => 1, 3 => 1, 4 => 1, 5 => 1, 6 => 1, 7 => 1);
array_walk($a, "cb", "junk");

$diff = microtime(true) - $startTime;
echo "time spent waiting: $diff\n";
?>
never reached here
--EXPECTF--
Fatal error: Maximum execution time of 3 seconds exceeded in %s on line %d
