<?php
/**
 * @file
 * opencivic_deployment.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function opencivic_deployment_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_button_oc_deployment';
  $strongarm->value = 0;
  $export['addanother_button_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_message_oc_deployment';
  $strongarm->value = 0;
  $export['addanother_message_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_tab_edit_oc_deployment';
  $strongarm->value = 0;
  $export['addanother_tab_edit_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addanother_tab_oc_deployment';
  $strongarm->value = 0;
  $export['addanother_tab_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_oc_deployment';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_oc_deployment';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_oc_deployment';
  $strongarm->value = '[node:field_oc_deploy_oc_deployment_of] deployed by [node:field_oc_deploy_member]';
  $export['auto_entitylabel_pattern_node_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_oc_deployment';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_oc_deployment';
  $strongarm->value = 0;
  $export['comment_anonymous_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_oc_deployment';
  $strongarm->value = 1;
  $export['comment_default_mode_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_oc_deployment';
  $strongarm->value = '50';
  $export['comment_default_per_page_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_oc_deployment';
  $strongarm->value = 1;
  $export['comment_form_location_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_oc_deployment';
  $strongarm->value = '1';
  $export['comment_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_oc_deployment';
  $strongarm->value = '1';
  $export['comment_preview_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_oc_deployment';
  $strongarm->value = 1;
  $export['comment_subject_field_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_oc_deployment';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_oc_deployment';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_oc_deployment';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_oc_deployment';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_oc_deployment';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_oc_deployment';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__oc_deployment';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'subscriptions_ui' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_oc_deployment';
  $strongarm->value = '4';
  $export['language_content_type_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_oc_deployment';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_oc_deployment';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_author_oc_deployment';
  $strongarm->value = 1;
  $export['node_export_reset_author_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_book_mlid_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_book_mlid_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_changed_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_created_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_created_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_last_comment_timestamp_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_last_comment_timestamp_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_menu_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_menu_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_path_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_path_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_promote_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_promote_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_revision_timestamp_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_revision_timestamp_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_status_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_status_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_sticky_oc_deployment';
  $strongarm->value = 0;
  $export['node_export_reset_sticky_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_oc_deployment';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_oc_deployment';
  $strongarm->value = '1';
  $export['node_preview_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_oc_deployment';
  $strongarm->value = 0;
  $export['node_submitted_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_oc_deployment';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'ical' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_oc_deployment_pattern';
  $strongarm->value = 'deploy/[node:title]';
  $export['pathauto_node_oc_deployment_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_default_workflow_oc_deployment';
  $strongarm->value = array(
    'n_new' => 'n_new',
    'n_unpub' => 'n_unpub',
    'n_pub' => 'n_pub',
    'c_new' => 'c_new',
    'c_unpub' => 'c_unpub',
    'c_pub' => 'c_pub',
  );
  $export['subscriptions_default_workflow_oc_deployment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_workflow_oc_deployment';
  $strongarm->value = array(
    0 => 'n_new',
    1 => 'n_unpub',
    2 => 'n_pub',
    3 => 'c_new',
    4 => 'c_unpub',
    5 => 'c_pub',
  );
  $export['subscriptions_workflow_oc_deployment'] = $strongarm;

  return $export;
}
