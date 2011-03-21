<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function whoi_ldap_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ldap_authentication" && $api == "default_ldap_authentication") {
    return array("version" => 1);
  }
}
