<?php

/**
 * Implementation of hook_default_ldap_authentication().
 */
function whoi_ldap_feature_default_ldap_authentication() {
  $export = array();
  $ldap_server = new stdClass;
  $ldap_server->disabled = FALSE; /* Edit this to true to make a default ldap_server disabled initially */
  $ldap_server->api_version = 1;
  $ldap_server->name = 'whoi_ldap';
  $ldap_server->status = TRUE;
  $ldap_server->server = 'ldap.whoi.edu';
  $ldap_server->port = 389;
  $ldap_server->tls = FALSE;
  $ldap_server->encrypted = TRUE;
  $ldap_server->basedn = 'ou=People,o=WHOI,c=US';
  $ldap_server->user_attr = 'uid';
  $ldap_server->mail_attr = 'mail';
  $ldap_server->binddn = '';
  $ldap_server->bindpw = '';
  $ldap_server->login_php = '';
  $ldap_server->filter_php = '';
  $ldap_server->weight = 0;

  $export['whoi_ldap'] = $ldap_server;
  return $export;
}
