// PHP example of a potential authentication bypass vulnerability
$user = $_POST['username'];
$pass = $_POST['password'];

// Simulated database query
$query = "SELECT * FROM users WHERE username = '$user' AND password = '$pass'";

// If the attacker inputs a username as 'admin' and password as ' OR '1'='1, the query becomes:
// SELECT * FROM users WHERE username = 'admin' AND password = '' OR '1'='1'
// This will always return true, leading to an authentication bypass.
