
<<<<<<< HEAD:ext/phalcon/db/columninterface.zep.h
extern zend_class_entry *phalcon_db_columninterface_ce;

ZEPHIR_INIT_CLASS(Phalcon_Db_ColumnInterface);
=======
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifndef PHALCON_DB_COLUMNINTERFACE_H
#define PHALCON_DB_COLUMNINTERFACE_H
>>>>>>> master:ext/db/columninterface.h

#include "php_phalcon.h"

<<<<<<< HEAD:ext/phalcon/db/columninterface.zep.h
ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_columninterface___set_state, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_db_columninterface_method_entry) {
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, __construct, arginfo_phalcon_db_columninterface___construct)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getSchemaName, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getName, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getType, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getTypeReference, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getTypeValues, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getSize, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getScale, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, isUnsigned, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, isNotNull, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, isPrimary, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, isAutoIncrement, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, isNumeric, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, isFirst, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getAfterPosition, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getBindType, NULL)
	PHP_ABSTRACT_ME(Phalcon_Db_ColumnInterface, getDefault, NULL)
	ZEND_FENTRY(__set_state, NULL, arginfo_phalcon_db_columninterface___set_state, ZEND_ACC_STATIC|ZEND_ACC_ABSTRACT|ZEND_ACC_PUBLIC)
  PHP_FE_END
};
=======
extern zend_class_entry *phalcon_db_columninterface_ce;

PHALCON_INIT_CLASS(Phalcon_Db_ColumnInterface);

#endif /* PHALCON_DB_COLUMNINTERFACE_H */
>>>>>>> master:ext/db/columninterface.h
