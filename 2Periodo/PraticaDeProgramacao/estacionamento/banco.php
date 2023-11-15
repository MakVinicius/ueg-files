<?php
    $bdServidor = '127.0.0.1';
    $bdUsuario = 'sistematarefa';
    $bdSenha = 'sistema';
    $bdBanco = 'estacionamento';

    $conexao = mysqli_connect($bdServidor, $bdUsuario, $bdSenha, $bdBanco);
    if (mysqli_connect_errno()) {
        echo "Problemas para conectar no banco. Verifique os dados!";
        die();
    }

    function buscar_veiculos($conexao)
    {
        $sqlBusca = 'SELECT * FROM veiculos';
        $resultado = mysqli_query($conexao, $sqlBusca);
        $veiculos = array();
        
        while ($veiculo = mysqli_fetch_assoc($resultado)) {
            $veiculos[] = $veiculo;
        }
        
        return $veiculos;
    }
    
    function gravar_veiculo($conexao, $veiculo)
    {
        $sqlGravar = "
            INSERT INTO veiculos
            (placa, marca, modelo, hora_entrada, hora_saida)
            VALUES
            (
                '{$veiculo['placa']}',
                '{$veiculo['marca']}',
                '{$veiculo['modelo']}',
                '{$veiculo['hora_entrada']}',
                '{$veiculo['hora_saida']}'
            )
        ";

        mysqli_query($conexao, $sqlGravar);    
    }
?>