<?php

abstract class calculation_plugins_operation {
  // Numbers we make calculations on.
  protected $a;
  protected $b;

  /**
   * Save arguments locally.
   */
  function __construct($a = 0, $b = 0) {
    $this->a = $a;
    $this->b = $b;
  }

  /**
   * Validate arguments. Return error message if validation failed.
   */
  public function validate() {}

  /**
   * Main operation. Calculate operation and return the result.
   */
  public function calculate() {}

  /**
   * Return result string for the operation.
   */
  public function resultMessage() {
    return t('Result of !operation with arguments !argument_a and !argument_b is !result.', array(
      '!operation' => get_class($this),
      '!argument_a' => $this->a,
      '!argument_b' => $this->b,
      '!result' => $this->calculate(),
    ));
  }
}
