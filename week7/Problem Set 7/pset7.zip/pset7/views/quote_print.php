
        
            <table align="center" style="margin: 0px auto"; >
                <thead colspan:"3">
                <tr>
                    <th text-align:"center">Stock Symbol</th>
                    <th text-align:"center">Stock Name</th>
                    <th text-align:"center">Stock Price</th>
                </tr>
                </thead>
                <tr>
                    <td><?=strtoupper($stock["symbol"])?></td>
                    <td><?=($stock["name"])?></td>
                    <td>$<?=number_format($stock["price"], 2)?></td>
                </tr>
        
            </table>


