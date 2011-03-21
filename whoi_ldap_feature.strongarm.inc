<?php

/**
 * Implementation of hook_strongarm().
 */
function whoi_ldap_feature_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_alter_email_field';
  $strongarm->value = 0;

  $export['ldap_authentication_alter_email_field'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_disable_pass_change';
  $strongarm->value = 0;

  $export['ldap_authentication_disable_pass_change'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_forget_passwords';
  $strongarm->value = 1;

  $export['ldap_authentication_forget_passwords'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_login_conflict';
  $strongarm->value = 1;

  $export['ldap_authentication_login_conflict'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_login_process';
  $strongarm->value = 0;

  $export['ldap_authentication_login_process'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ldap_authentication_sync_passwords';
  $strongarm->value = 0;

  $export['ldap_authentication_sync_passwords'] = $strongarm;
  return $export;
}
