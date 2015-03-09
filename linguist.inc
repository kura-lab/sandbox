<?php

/**
 * Sample Class
 */
class Sample
{
    private $member;

    /**
     * Constructor
     */
    public function __construct($member)
    {
        $this->member = $member;
    }

    /**
     * Destructor
     */
    public function __destruct()
    {
        $this->member = null;
    }

    public function getHello()
    {
        return "Hello world";
    }
}

/* vim:set filetype=php: */
