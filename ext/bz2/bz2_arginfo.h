/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_INFO_EX(arginfo_bzopen, 0, 0, 2)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bzread, 0, 0, 1)
	ZEND_ARG_INFO(0, bz)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bzwrite, 0, 0, 2)
	ZEND_ARG_INFO(0, bz)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzflush, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

#define arginfo_bzclose arginfo_bzflush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzerrno, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzerrstr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzerror, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bzcompress, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, blocksize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, workfactor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bzdecompress, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, small, IS_LONG, 0)
ZEND_END_ARG_INFO()
