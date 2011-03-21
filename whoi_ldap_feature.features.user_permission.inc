<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function whoi_ldap_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer ldap modules
  $permissions['administer ldap modules'] = array(
    'name' => 'administer ldap modules',
    'roles' => array(),
  );

  return $permissions;
}
