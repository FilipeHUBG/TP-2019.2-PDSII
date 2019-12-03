TRABALHO PRÁTICO PDSII - SISTEMA DE GERÊNCIA DE UMA TRANSPORTADORA

	- FILIPE SANTOS FERNANDES - ENGENHARIA DE SISTEMAS
	- MATHEUS ALVIM GALBIATTI - ENGENHARIA DE CONTROLE E AUTOMAÇÃO
	
	-> PARA COMPILAR O CÓDIGO:
	Deve criado um arquivo do tipo "Console Application", no qual haverá três arquivos principais:
		- transportadora3.cpp, que será o Arquivo de Recurso do programa;
		- transportadora3.h, que será o Arquivo de Cabeçalho do programa;
		- main.cpp, arquivo que contém a função main.
	Algumas observações:
		- O programa foi desenvolvido no sistema operacional Windows e, como há o uso da função 'system', essa recebe como
	parâmetro comandos específicos desse sistema operacional, como na linha 104, onde há 'system("pause")'. Portanto, caso o
	programa não for compilado nesse sistema operacional, devem ser realizados ajustes com relação aos comandos 'system'.
		- O progama foi testado tanto na plataforma 'Microsoft Visual Studio' quanto no 'Dev-C++', funcionando normalmente.
	No 'Dev-C++' o comando 'virtual' da função 'imprime_cadastro()', presente na classe 'Cadastro', teve que ser retirado, porém
	esse provavelmente foi apenas um problema de compatibilidade com a versão do compilador utilizado nessa plataforma.
		- A função 'getline()' é utilizada com frequência no programa e em alguns compiladores ela deve ser chamada duas vezes
	(uma embaixo da outra) para que funcione adequadamente.

	-> USER STORIES:
	1) COMO ATENDENTE DE UMA TRANSPORTADORA, EU GOSTARIA DE CADASTRAR NOVOS CLIENTES PARA CONTROLE DA EMPRESA;
		CRITÉRIOS DE ACEITAÇÃO:
			1.1) CADASTRO DEVE CONTER DADOS PESSOAIS DA PESSOA FÍSICA;
			1.2) CADASTRO DEVE CONTER DADOS EMPRESARIAIS CASO PESSOA JURÍDICA;
			1.3) DEVE SER POSSÍVEL ALTERAR O CADASTRO CASO NECESSÁRIO;
		
	2) COMO CLIENTE DE UMA TRANSPORTADORA, EU GOSTARIA DE SABER O ESTADO DA ENTREGA PARA CONTROLE DE LOGÍSTICA;
		CRITÉRIO DE ACEITAÇÃO
			2.1) O SISTEMA DEVE MOSTRAR A ORIGEM E O DESTINO DA ENTREGA;
			2.2) O SISTEMA DEVE RETORNAR O TEMPO RESTANTE DE VIAGEM;
			2.3) O SISTEMA DEVE RETORNAR O TIPO DE PRODUTO TRANSPORTADO;
		
	3) COMO CLIENTE DE UMA TRANSPORTADORA, EU GOSTARIA DE SABER O PREÇO FINAL DE TRANSPORTE DE DETERMINADA MERCADORIA PARA PLANEJAMENTO FINANCEIRO;
		CRITÉRIO DE ACEITAÇÃO
			3.1) O CLIENTE DEVE TER OPÇÕES DE MERCADORIA;
			3.2) ALGUMAS OPÇÕES DE MERCADORIA SÓ DEVEM SER ACESSÍVEIS À PESSOAS JURÍDICAS;
			3.3) O PREÇO DEVE TER COMO BASE A PREFERÊNCIA DE ENTREGA ESCOLHIDA PELO CLIENTE (EXPRESSO, NORMAL);
			
	4) COMO GERENTE DE UMA TRANSPORTADORA, EU GOSTARIA DE REALIZAR O CADASTRO DE FUNCIONÁRIOS PARA PRESTAÇÃO DE SERVIÇO DE ENTREGA ;
		CRITÉRIO DE ACEITAÇÃO
			4.1) O SISTEMA DEVE PERMITIR O CADASTRO DE DADOS PESSOAIS DO FUNCIONÁRIO (NOME, EMAIL, CPF) ;
			4.2) O SISTEMA DEVE PERMITIR O CADASTRO DE DADOS EMPRESARIAIS DO FUNCIONÁRIO (DATA DE INGRESSO, SALÁRIO E CARGO);
			4.3) O SISTEMA DEVE PERMITIR A ALTERAÇÃO DOS DADOS DO FUNCIONÁRIO, SE NECESSÁRIO;
			
	5) COMO SISTEMA DE UMA TRANSPORTADORA, EU GOSTARIA DE CALCULAR OS PREÇOS DE ENTREGA DAS MERCADORIAS PARA CONCRETIZAR AS VENDAS ;
		CRITÉRIO DE ACEITAÇÃO
			5.1) O CRITÉRIO DEVE LEVAR EM CONTA O TIPO DE MERCADORIA (QUANTIDADE E RISCO DA MERCADORIA) E DISTÂNCIA;
			5.2) OS CÁLCULOS TERÃO COMO BASE AS CAPITAIS DO BRASIL;
			5.3) O CÁLCULO SERÁ FEITO A PARTIR DE UM SISTEMA DE COORDENADAS POLARES;
			
	6) COMO FUNCIONARIO DE UMA TRANSPORTADORA, EU GOSTARIA DE SABER OS DADOS DE ENTREGA DA MERCADORIA PARA PODER REALIZAR A ENTREGA DO PEDIDO:
		CRITÉRIO DE ACEITAÇÃO
			6.1) OS DADOS DEVEM CONTER DESTINO DE ENTREGA;
			6.2) OS DADOS DEVEM CONTER O TIPO DE MERCADORA A SER TRANSPORTADA;
			6.3) OS DADOS DEVEM RETORNAR O TEMPO DE VIAGEM PREVISTO;
			
