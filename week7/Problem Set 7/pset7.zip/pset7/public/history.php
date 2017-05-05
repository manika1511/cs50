<?php
    // configuration
    require("../includes/config.php"); 
    
    
    $history_values = CS50::query("SELECT * FROM `history` WHERE id = ?",$_SESSION["id"]);
    
    
    $positions = [];
    foreach($history_values as $history_value)
    {
        $positons[] = [
            "transaction" => $history_value["transaction"],
            "symbol" => $history_value["symbol"],
            "shares" => $history_value["shares"],
            "time" => $history_value["time"],
            "price" => $history_value["price"],
            "total_price" => $history_value["shares"] * $history_value["price"]
            ];
    }
    
    //render history
    render("history_display.php", ["title" => "Positions", "positions" => $history_values]);
    
    
    
    
?>    
