<?php
/**
 * @file
 * ting_genre_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ting_genre_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_genre_page_new_materials|node|genre_page|form';
  $field_group->group_name = 'group_genre_page_new_materials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'genre_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'New materials',
    'weight' => '3',
    'children' => array(
      0 => 'field_ddelibra_new_search',
      1 => 'field_new_materials_row_count',
      2 => 'field_ting_new_materials_limit',
      3 => 'field_ting_new_materials_search',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_genre_page_new_materials|node|genre_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|genre_page|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'genre_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '5',
    'children' => array(
      0 => 'field_related_content_count',
      1 => 'field_related_event_count',
      2 => 'field_related_event_time_limit',
      3 => 'field_ting_genre_page_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_content|node|genre_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_links|node|genre_page|form';
  $field_group->group_name = 'group_related_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'genre_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related links',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_link_image',
      1 => 'field_related_link_title',
      2 => 'field_related_link_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_related_links|node|genre_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ting_inspiration_list|node|genre_page|form';
  $field_group->group_name = 'group_ting_inspiration_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'genre_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inspiration list',
    'weight' => '4',
    'children' => array(
      0 => 'field_inspiration_search',
      1 => 'field_inspiration_raw_count',
      2 => 'field_inspiration_row_count',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ting_inspiration_list|node|genre_page|form'] = $field_group;

  return $export;
}
