
<<<<<<< HEAD:ext/phalcon/mvc/model/metadata.zep.h
extern zend_class_entry *phalcon_mvc_model_metadata_ce;

ZEPHIR_INIT_CLASS(Phalcon_Mvc_Model_MetaData);

PHP_METHOD(Phalcon_Mvc_Model_MetaData, _initialize);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, setDI);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getDI);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, setStrategy);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getStrategy);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, readMetaData);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, readMetaDataIndex);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, writeMetaDataIndex);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, readColumnMap);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, readColumnMapIndex);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getPrimaryKeyAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getNonPrimaryKeyAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getNotNullAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getDataTypes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getDataTypesNumeric);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getIdentityField);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getBindTypes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getAutomaticCreateAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getAutomaticUpdateAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, setAutomaticCreateAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, setAutomaticUpdateAttributes);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getDefaultValues);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getColumnMap);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, getReverseColumnMap);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, hasAttribute);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, isEmpty);
PHP_METHOD(Phalcon_Mvc_Model_MetaData, reset);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata__initialize, 0, 0, 4)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, schema)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_setdi, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, dependencyInjector, Phalcon\\DiInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_setstrategy, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, strategy, Phalcon\\Mvc\\Model\\MetaData\\StrategyInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_readmetadata, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_readmetadataindex, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
	ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_writemetadataindex, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
	ZEND_ARG_INFO(0, index)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_readcolumnmap, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_readcolumnmapindex, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
	ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getattributes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getprimarykeyattributes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getnonprimarykeyattributes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getnotnullattributes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getdatatypes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getdatatypesnumeric, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getidentityfield, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getbindtypes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getautomaticcreateattributes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getautomaticupdateattributes, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_setautomaticcreateattributes, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_setautomaticupdateattributes, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getdefaultvalues, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getcolumnmap, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_getreversecolumnmap, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_metadata_hasattribute, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, model, Phalcon\\Mvc\\ModelInterface, 0)
	ZEND_ARG_INFO(0, attribute)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_mvc_model_metadata_method_entry) {
	PHP_ME(Phalcon_Mvc_Model_MetaData, _initialize, arginfo_phalcon_mvc_model_metadata__initialize, ZEND_ACC_PROTECTED|ZEND_ACC_FINAL)
	PHP_ME(Phalcon_Mvc_Model_MetaData, setDI, arginfo_phalcon_mvc_model_metadata_setdi, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getDI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, setStrategy, arginfo_phalcon_mvc_model_metadata_setstrategy, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getStrategy, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, readMetaData, arginfo_phalcon_mvc_model_metadata_readmetadata, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	PHP_ME(Phalcon_Mvc_Model_MetaData, readMetaDataIndex, arginfo_phalcon_mvc_model_metadata_readmetadataindex, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	PHP_ME(Phalcon_Mvc_Model_MetaData, writeMetaDataIndex, arginfo_phalcon_mvc_model_metadata_writemetadataindex, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	PHP_ME(Phalcon_Mvc_Model_MetaData, readColumnMap, arginfo_phalcon_mvc_model_metadata_readcolumnmap, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	PHP_ME(Phalcon_Mvc_Model_MetaData, readColumnMapIndex, arginfo_phalcon_mvc_model_metadata_readcolumnmapindex, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getAttributes, arginfo_phalcon_mvc_model_metadata_getattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getPrimaryKeyAttributes, arginfo_phalcon_mvc_model_metadata_getprimarykeyattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getNonPrimaryKeyAttributes, arginfo_phalcon_mvc_model_metadata_getnonprimarykeyattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getNotNullAttributes, arginfo_phalcon_mvc_model_metadata_getnotnullattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getDataTypes, arginfo_phalcon_mvc_model_metadata_getdatatypes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getDataTypesNumeric, arginfo_phalcon_mvc_model_metadata_getdatatypesnumeric, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getIdentityField, arginfo_phalcon_mvc_model_metadata_getidentityfield, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getBindTypes, arginfo_phalcon_mvc_model_metadata_getbindtypes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getAutomaticCreateAttributes, arginfo_phalcon_mvc_model_metadata_getautomaticcreateattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getAutomaticUpdateAttributes, arginfo_phalcon_mvc_model_metadata_getautomaticupdateattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, setAutomaticCreateAttributes, arginfo_phalcon_mvc_model_metadata_setautomaticcreateattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, setAutomaticUpdateAttributes, arginfo_phalcon_mvc_model_metadata_setautomaticupdateattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getDefaultValues, arginfo_phalcon_mvc_model_metadata_getdefaultvalues, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getColumnMap, arginfo_phalcon_mvc_model_metadata_getcolumnmap, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, getReverseColumnMap, arginfo_phalcon_mvc_model_metadata_getreversecolumnmap, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, hasAttribute, arginfo_phalcon_mvc_model_metadata_hasattribute, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, isEmpty, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Mvc_Model_MetaData, reset, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
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

#ifndef PHALCON_MVC_MODEL_METADATA_H
#define PHALCON_MVC_MODEL_METADATA_H

#include "php_phalcon.h"

extern zend_class_entry *phalcon_mvc_model_metadata_ce;

PHALCON_INIT_CLASS(Phalcon_Mvc_Model_MetaData);

#define PHALCON_MVC_MODEL_METADATA_MODELS_ATTRIBUTES                   0
#define PHALCON_MVC_MODEL_METADATA_MODELS_PRIMARY_KEY                  1
#define PHALCON_MVC_MODEL_METADATA_MODELS_NON_PRIMARY_KEY              2
#define PHALCON_MVC_MODEL_METADATA_MODELS_NOT_NULL                     3
#define PHALCON_MVC_MODEL_METADATA_MODELS_DATA_TYPES                   4
#define PHALCON_MVC_MODEL_METADATA_MODELS_DATA_TYPES_NUMERIC           5
#define PHALCON_MVC_MODEL_METADATA_MODELS_DATE_AT                      6
#define PHALCON_MVC_MODEL_METADATA_MODELS_DATE_IN                      7
#define PHALCON_MVC_MODEL_METADATA_MODELS_IDENTITY_COLUMN              8
#define PHALCON_MVC_MODEL_METADATA_MODELS_DATA_TYPES_BIND              9
#define PHALCON_MVC_MODEL_METADATA_MODELS_AUTOMATIC_DEFAULT_INSERT    10
#define PHALCON_MVC_MODEL_METADATA_MODELS_AUTOMATIC_DEFAULT_UPDATE    11

#define PHALCON_MVC_MODEL_METADATA_MODELS_COLUMN_MAP                   0
#define PHALCON_MVC_MODEL_METADATA_MODELS_REVERSE_COLUMN_MAP           1

#endif /* PHALCON_MVC_MODEL_METADATA_H */
>>>>>>> master:ext/mvc/model/metadata.h
