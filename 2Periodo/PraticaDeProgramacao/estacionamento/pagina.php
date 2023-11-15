<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Estacionamento</title>
</head>
<body>
    <form action="">
        <fieldset>
            <legend>Gerenciador Estacionamento</legend>

            <label for="placa">Placa</label>
            <input type="text" name="placa" required>
            
            <label for="marca">Marca</label>
            <input type="text" name="marca">

            <label for="modelo">Modelo</label>
            <input type="text" name="modelo">

            <label for="hora_entrada">Hora de Entrada</label>
            <input type="text" name="hora_entrada">

            <label for="hora_saida">Hora de Saída</label>
            <input type="text" name="hora_saida">

            <input type="submit" value="Cadastrar" />
        </fieldset>
    </form>

    <table>
        <th>
            <tr>
                <th>Placa</th>
                <th>Marca</th>
                <th>Modelo</th>
                <th>Hora de Entrada</th>
                <th>Hora de Saída</th>
            </tr>
        </th>
        <tbody>
            <?php foreach ($lista_veiculos as $veiculo) : ?>
                <tr>
                    <td><?php echo $veiculo['placa']; ?> </td>
                    <td><?php echo $veiculo['marca']; ?> </td>
                    <td><?php echo $veiculo['modelo']; ?> </td>
                    <td><?php echo $veiculo['hora_entrada']; ?> </td>
                    <td><?php echo $veiculo['hora_saida']; ?> </td>
                </tr>
            <?php endforeach; ?>
        </tbody>
    </table>
</body>
</html>