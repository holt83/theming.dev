<?php

/**
 * Operation plugin for calculation plugins module.
 * 
 * Calculate sum of two numbers
 */
$plugin = array(
  'label' => t('Sum'),
  'handler' => array(
    'class' => 'calculation_plugins_sum_operation',  
  ),  
);

class calculation_plugins_sum_operation extends calculation_plugins_operation {
  public function calculate() {
    return $this->a + $this->b;
  }
}