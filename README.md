### cipher
[X] Criar a classe ConversionTable, responsável pelos aspectos da tabela de conversão e métodos.

[ ] Criar a classe Cipher, responsável por encriptar e decriptar textos. Esta classe possui um objeto da classe
ConversionTable como atributo, que deve ser criado no construtor de Cipher dinamicamente e estar
encapsulado. Ninguém deve ter acesso à tabela de conversão.

[ ] A classe Cipher deve se comunicar com seu atributo do tipo ConversionTable, criando-o de alguma forma
que seu código de aluno seja informado também, como uma espécie de chave a ser combinada na
estratégia de geração da tabela de conversão. Logo, o código de aluno deve vir do main para o objeto de
Cipher, e ser passado de Cipher para a ConvertionTable.

[ ] Criar em Cipher um método para re-gerar a tabela de conversão, sempre que for solicitado (não somente
no construtor), inclusive passando outro código de aluno como chave se for necessário a partir do main.
[ ] O main se comunicará com um objeto do tipo Cipher, enviando textos a serem encriptados, e decriptados
para o objeto resolver.

[ ] A estratégia para gerar a tabela de conversão é livre, e pode envolver outras estratégias de sua escolha,
desde que usada combinada com seu código de aluno. Lembre-se que deve ser reversível para poder
decriptar os textos.

[ ] Elaborar um menu.
