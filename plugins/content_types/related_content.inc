<?php

$plugin = array(
  'title' => t('Related content'),
  'description' => t('Show a number or nodes with relevant info'),
  'single' => TRUE,
  'content_types' => array('related_content'),
  'render callback' => 'related_content_content_type_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('Ting'),
  'render last' => TRUE,
);

/**
 * Render the ting search results amount block.
 */
function related_content_content_type_render($subtype, $conf, $panel_args, $context) {
  // Since the context is required we can be sure it's always there.
  $node = $context->data;
  $block = new stdClass();
  // Needed because we can't be sure that this plugin is only attached
  if ($node->type == 'genre_page') {

  }
//  $tid = taxonomy_get_term_by_name('krimi');
//  $nodes = taxonomy_select_nodes($tid);
  $block->content = '<div id="ting-search-context"> test</div>';
  return $block;
}


/**
 * Enable admin settings page
 */
function ting_genre_page_related_content_content_type_edit_form($form, &$form_state) {
  return $form;
}

