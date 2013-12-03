<?php

/**
 * Multiply operation plugin.
 */
class calculation_plugins_multiply_operation extends calculation_plugins_operation {
  public function calculate() {
    return $this->a * $this->b;
  }

  public function resultMessage() {
    return t('Multiply !argument_a on !argument_b is !result.', array(
      '!argument_a' => $this->a,
      '!argument_b' => $this->b,
      '!result' => $this->calculate(),
    ));
  }
}