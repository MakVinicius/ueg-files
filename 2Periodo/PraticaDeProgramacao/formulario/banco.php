<?php
    $bdServidor = '127.0.0.1';
    $bdUsuario = 'sistematarefa';
    $bdSenha = 'sistema';
    $bdBanco = 'contatos';

    $conexao = mysqli_connect($bdServidor, $bdUsuario, $bdSenha, $bdBanco);
    if (mysqli_connect_errno()) {
        echo "Problemas para conectar no banco. Verifique os dados!";
        die();
    }

    function buscar_contatos($conexao)
    {
        $sqlBusca = 'SELECT * FROM contatos';
        $resultado = mysqli_query($conexao, $sqlBusca);
        $contatos = array();
        
        while ($contato = mysqli_fetch_assoc($resultado)) {
            $contatos[] = $contato;
        }
        
        return $contatos;
    }
    
    function gravar_contato($conexao, $contato)
    {
        $sqlGravar = "
            INSERT INTO contatos
            (nome, telefone, email, descricao, data_nascimento, favorito)
            VALUES
            (
                '{$contato['nome']}',
                {$contato['telefone']},
                '{$contato['email']}',
                '{$contato['descricao']}',
                '{$contato['data_nascimento']}',
                {$contato['favorito']}
            )
        ";

        mysqli_query($conexao, $sqlGravar);    
    }
?>