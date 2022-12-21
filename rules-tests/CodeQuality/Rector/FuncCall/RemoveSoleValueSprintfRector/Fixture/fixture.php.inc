<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

class Fixture
{
    public function run()
    {
        $value = sprintf('%s', 'hi');

        $welcome = 'hello';
        $value = sprintf('%s', $welcome);
        
        $amount = sprintf('%s', 1);

        $number = 1;
        $howMuch = sprintf('%s', $number);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

class Fixture
{
    public function run()
    {
        $value = 'hi';

        $welcome = 'hello';
        $value = $welcome;
        
        $amount = (string) 1;

        $number = 1;
        $howMuch = (string) $number;
    }
}

?>
