# Regid
### PROJETO INTEGRADO MULTIDISCIPLINAR - UNIP 2021
Sistema em C para o cadastro de pacientes diagnosticados com Covid-19.

Com o crescimento exponencial dos casos de pacientes diagnosticados com Covid-19, tornou-se necessário a utilização de tecnologias nesse contexto. Por meio de um software de cadastro de pacientes cujo o diagnóstico foi positivo, é gerada uma base de dados informativa com os principais dados de cada paciente, tais como: nome, CPF, telefone, endereço (rua, número, bairro, cidade, estado e CEP), data de nascimento, e-mail, data do diagnóstico e comorbidade do paciente (diabetes, obesidade, hipertensão, tuberculose, entre outros), se houver.

A bases de dados geradas poderão ser consultadas a qualquer momento. Ao realizar o cadastro de um novo paciente, se pertencer ao grupo de risco (com base na idade superior a 65 anos ou na existência de comorbidade), será salvo, também, em uma base de dados restrita somente para pacientes do grupo de risco. Sendo assim, teremos a base geral de todos os pacientes e outra com somente aqueles do grupo de risco.

A relação de pacientes do grupo de risco conterá somente a informação do CEP e a idade, para que essa informação possa ser enviada para a central da Secretaria da Saúde da cidade.

## 📋 MANUAL DO USUÁRIO
O presente manual tem por objetivo auxiliar os utilizadores a entender como o software Regid funciona e como utiliza-lo corretamente.

Após abrir, o Regid pedirá que o usuário faça login com suas credenciais de acesso. O usuário e senha padrão exigido para fazer o login e utilização do sistema é “admin” (usuário) e “admin” (senha).

Após o login, será exibido uma breve lista de opções de controle que poderá ser escolhido pelo usuário. Ao pressionar o número 4 (quatro) do teclado e “Enter”, a última opção será executada, ou seja, o logout, que levará à tela de login novamente para inserir as credenciais de acesso.

Para realizar o cadastro de um novo paciente observamos que a primeira opção deve ser selecionada para a realização do cadastro. Pressionando o número 1 (um) do teclado e “Enter”.

Logo no cabeçalho podemos observar que os campos cujo as informações devem ser preenchidas obrigatoriamente será identificado pelo símbolo “[*]”, caso contrário, ficará a cargo do usuário a escolha de preencher ou não. É recomendável que todas as informações sejam preenchidas para melhor controle e registro.

Caso o usuário deixar de preencher algum campo obrigatório, será exibido uma caixa de mensagem, exemplificando o correto preenchimento do campo em questão e o usuário retornará ao questionário para preencher novamente.

O primeiro campo que deve ser preenchido é o “Nome completo”. As demais informações serão solicitadas conforme o preenchimento sequencial dos campos. Não há restrição quanto ao uso de acentuação ou letras maiúsculas e minúsculas.

Para realizar a consulta de qualquer cadastro realizado anteriormente basta utilizar a segunda ou terceira opção do menu de controle.

Inicialmente, quando não há cadastros realizados, não existem os arquivos de textos criados que armazenam os dados dos pacientes.

Logo após o primeiro cadastro será gerado o arquivo “TODOS_OS_PACIENTES.txt” no local em que se encontra o binário do programa (executável). Qualquer cadastro feito a seguir será adicionado neste mesmo arquivo sem sobrescrever o anterior.

Caso for realizado o cadastro de um paciente do grupo de risco, será gerado o arquivo “PACIENTES_GRUPO_DE_RISCO.txt”, também no mesmo local em que se encontra o binário do programa. Assim como o outro arquivo, este também armazenará os futuros cadastros dos pacientes pertencentes a esse grupo.

Modificar o nome original desses arquivos implica em mal funcionamento do sistema, já que o mesmo não irá encontrá-los para realizar a adição de novos dados ou consulta.

## 🔧 MANUAL DE INSTALAÇÃO
O Regid é um software desenvolvido exclusivamente para o sistema operacional Windows, compatível com Windows XP / 7 / 8 / 10.

Para utilizar o Regid não é necessário instalação, basta executar o binário cuja a arquitetura seja correspondente com a do sistema operacional em que deseja executar (32 ou 64 bits).

## ⚙️ COMO COMPILAR O PROGRAMA
Para realizar a compilação do programa é necessário realizar o download e instalação do arquivo codeblocks-20.03-mingw-setup.exe pelo site oficial do CodeBlocks.

Após instalar é necessário criar um projeto e adicionar o código fonte presente no arquivo "main.c" deste repositório. Ainda no CodeBlocks, basta pressionar a tecla “F9” do teclado para compilar e executar o código presente na IDE.

## 🛠️ FERRAMENTAS UTILIZADAS
Para o desenvolvimento deste projeto foram usadas ferramentas para a codificação e compilação do programa, conforme se segue.

CodeBlocks:
“Code::Blocks é um ambiente de desenvolvimento integrado de código aberto e multiplataforma. Ele foi desenvolvido em C++, usando wxWidgets. Sua arquitetura é orientada a plugin, de forma que suas funcionalidades são definidas pelos plugins fornecidos a ele.” (WIKIPÉDIA, 2020)

MinGW:
“MinGW é uma versão portada para Microsoft Windows do conjunto de ferramentas GNU. Este software inclui um conjunto de arquivos cabeçalho para a API do Windows que permite aos desenvolvedores usar o GCC para criar programas nativos em Windows sem precisar contar com uma emulação em tempo real de um sistema Unix-like.” (WIKIPÉDIA, 2021)

Figlet:
“O Figlet é um programa de computador que gera faixas de texto, em uma variedade de tipos de letra, compostas de letras compostas de conglomerações de caracteres ASCII menores. O nome deriva de "cartas de Frank, Ian e Glenn".”  (WIKIPÉDIA, 2021)
