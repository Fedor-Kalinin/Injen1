##### Как создать ssh ключ: </br>
<code> ssh-keygen -t ed25519 -C "your_email@example.com"
ssh-add ~/.ssh/id_ed25519 </code>
##### Как добавить ключ в аккаунт на GitHub:</br>
<code> Settings->SSH and GPG keys -> new SSH key -> вставить текст из .pub </code>
##### Как склонировать репозиторий:</br>
<code> git clone git@github.com:username/repository.git </code>