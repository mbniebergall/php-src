--TEST--
Timeout within eval
--SKIPIF--
<?php
	if (getenv("SKIP_SLOW_TESTS")) die("skip slow test");
?>
--FILE--
<?php

include __DIR__ . DIRECTORY_SEPARATOR . "timeout_config.inc";

set_time_limit($t);

function hello ($t) {
	echo "call", PHP_EOL;
	$startTime = microtime(true);
	busy_wait($t*2);
	$diff = microtime(true) - $startTime;
	echo "time spent waiting: $diff\n";
}

eval('hello($t);');
?>
never reached here
--EXPECTF--
call

Fatal error: Maximum execution time of 3 seconds exceeded in %s on line %d
