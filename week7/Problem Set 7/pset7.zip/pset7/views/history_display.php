<div id="tableid">

    <table align="center" style="margin: 0px auto"; border="2">
        <thead>
            <th>Transaction</th>
            <th>Symbol</th>
            <th>Shares</th>
            <th>Time</th>
            <th>Price</th>
        </thead>
        
        <tbody>
        <?php foreach ($positions as $position): ?>
            <tr>    
                <td><?= $position["transaction"]?></td>
                <td><?= $position["symbol"]?></td>
                <td><?= $position["shares"]?></td>
                <td><?= $position["time"]?></td>
                <td><?= $position["price"]?></td>
            </tr>
            <?php endforeach ?>    
        </tbody>
    </table>
</div>