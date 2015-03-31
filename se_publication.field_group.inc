<?php
/**
 * @file
 * se_publication.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function se_publication_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pub_data|node|se_publication|form';
  $field_group->group_name = 'group_pub_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'se_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication Data',
    'weight' => '6',
    'children' => array(
      0 => 'field_se_first_author',
      1 => 'field_se_pub_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pub-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pub_data|node|se_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_se_reg_data|node|se_publication|form';
  $field_group->group_name = 'group_se_reg_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'se_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Regulation Data',
    'weight' => '7',
    'children' => array(
      0 => 'field_se_pub_state',
      1 => 'field_research_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-se-reg-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_se_reg_data|node|se_publication|form'] = $field_group;

  return $export;
}
