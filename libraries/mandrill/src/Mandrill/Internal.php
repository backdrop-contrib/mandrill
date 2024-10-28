<?php

class Mandrill_Internal {

    public $master;

    public function __construct(Mandrill $master) {
        $this->master = $master;
    }

}


