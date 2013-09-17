<?php

/**
 * Module configuration form.
 */
function uc_suffix_settings_form($form_state) {
  $my_suffix = variable_get('uc_suffix_string', '');

  $form['display'] = array(
    '#type' => 'fieldset',
    '#title' => t('Price display options'),
    '#collapsible' => TRUE,
  );
  $form['display']['uc_suffix_string'] = array(
    '#type' => 'textfield',
    '#title' => t('Price suffix'),
    '#description' => t('A custom suffix to add to all prices.'),
    '#default_value' => $my_suffix,
    '#size' => 100,
  );

  return system_settings_form($form);
}
