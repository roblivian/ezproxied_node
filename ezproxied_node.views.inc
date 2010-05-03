<?php

function ezproxied_node_views_data() {

  // Basic table information.

  // ----------------------------------------------------------------
  // ezproxied table
  //  New group within Views called 'Example'

  $data = array();
  $data['ezproxied_node']['table']['group']  = t('Node');

  // tables + fields that can be used for SQL Joins
  $data['ezproxied_node']['table']['join'] = array(
    'node_revisions' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  // Redirect link
  $data['ezproxied_node']['redirect_link'] = array(
    'title' => t('EZProxied Redirect Link'),
    'help' => t('EZProxied Redirect Link of Node.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
      'handler' => 'views_handler_sort',
     ),
  );

  // EZProxy-prepended link
  $data['ezproxied_node']['ezproxy_link'] = array(
    'title' => t('EZProxied Link with Proxy Prepended'),
    'help' => t('EZProxied Link of Node with Proxy Prepended.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
      'handler' => 'views_handler_sort',
     ),
  );

  // EZProxy raw link
  $data['ezproxied_node']['link'] = array(
    'title' => t('EZProxied Link without Proxy Prepended'),
    'help' => t('EZProxied Link of Node without Proxy Prepended.'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
     ),
     'filter' => array(
      'handler' => 'views_handler_filter_string',
     ),
     'argument' => array(
       'handler' => 'views_handler_argument_string',
     ),
     'sort' => array(
      'handler' => 'views_handler_sort',
     ),
  );


  return $data;
}
