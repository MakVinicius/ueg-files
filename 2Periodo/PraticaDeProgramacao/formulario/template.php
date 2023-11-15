<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Contatos</title>
</head>
<body>
    <form action="">
        <fieldset>
            <legend>Gerenciador de Contatos</legend>

            <label for="nome">Nome</label>
            <input type="text" name="nome" required>
            
            <label for="telefone">Telefone</label>
            <input type="number" name="telefone">

            <label for="email">Email</label>
            <input type="text" name="email">

            <label for="descricao">Descrição</label>
            <input type="text" name="descricao">

            <label for="data_nascimento">Data de Nascimento</label>
            <input type="text" name="data_nascimento">

            <label for="favorito">Favorito?</label>
            <select id="favorito" name="favorito">
                <option value="true">True</option>
                <option value="false">False</option>
            </select>

            <input type="submit" value="Cadastrar" />
        </fieldset>
    </form>

    <table>
        <th>
            <tr>
                <th>Nome</th>
                <th>Telefone</th>
                <th>Email</th>
                <th>Descrição</th>
                <th>Data de Nascimento</th>
                <th>Favorito?</th>
            </tr>
        </th>
        <tbody>
            <?php foreach ($lista_contatos as $contato) : ?>
                <tr>
                    <td><?php echo $contato['nome']; ?> </td>
                    <td><?php echo $contato['telefone']; ?> </td>
                    <td><?php echo $contato['email']; ?> </td>
                    <td><?php echo $contato['descricao']; ?> </td>
                    <td><?php echo traduz_data_para_exibir($contato['data_nascimento']); ?> </td>
                    <td><?php echo traduz_favorito($contato['favorito']); ?> </td>
                </tr>
            <?php endforeach; ?>
        </tbody>
    </table>
</body>
</html>