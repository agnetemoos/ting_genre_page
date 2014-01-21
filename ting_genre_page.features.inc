<?php
/**
 * @file
 * ting_genre_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ting_genre_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ting_genre_page_node_info() {
  $items = array(
    'genre_page' => array(
      'name' => t('Genre page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
