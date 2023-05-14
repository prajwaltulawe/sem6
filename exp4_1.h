<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" href="http://code.jquery.com/mobile/1.4.5/jquery.mobile-1.4.5.min.css">
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
<script src="http://code.jquery.com/jquery-1.11.3.min.js"></script>
<script src="http://code.jquery.com/mobile/1.4.5/jquery.mobile-1.4.5.min.js"></script>
</head>
<body>

<div data-role="page" id="pageone">
  <div data-role="header">
    <nav class="navbar navbar-expand-lg bg-body-tertiary">
		<div class="container-fluid">
		  <a class="navbar-brand" href="#">Amazon</a>
		  <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarText" aria-controls="navbarText" aria-expanded="false" aria-label="Toggle navigation">
			<span class="navbar-toggler-icon"></span>
		  </button>
		  <div class="collapse navbar-collapse" id="navbarText">
			<ul class="navbar-nav me-auto mb-2 mb-lg-0">
			  <li class="nav-item">
				<a class="nav-link active" aria-current="page" href="#">Home</a>
			  </li>
			  <li class="nav-item">
				<a class="nav-link" href="#">Features</a>
			  </li>
			  <li class="nav-item">
				<a class="nav-link" href="#">Pricing</a>
			  </li>
			</ul>
			<span class="navbar-text">
			  <a href="#login">Login</a>
			</span>
		  </div>
		</div>
	  </nav>
  </div>

  <div data-role="main" class="ui-content d-flex">
	<div class="card p-1 m-2" style="width: 18rem;">
		<img style="height: 350px;" src="https://lp2.hm.com/hmgoepprod?set=format%5Bwebp%5D%2Cquality%5B79%5D%2Csource%5B%2F2f%2F3f%2F2f3f0f16d54b56099c729137c884170ac79caff1.jpg%5D%2Corigin%5Bdam%5D%2Ccategory%5B%5D%2Ctype%5BDESCRIPTIVESTILLLIFE%5D%2Cres%5Bm%5D%2Chmver%5B2%5D&call=url%5Bfile%3A%2Fproduct%2Fmain%5D" class="card-img-top" alt="...">
		<div class="card-body">
		  <h5 class="card-title">Jeans</h5>
		  <p class="card-text">Lorem ipsum dolor sit amet consectetur adipisicing elit. Consectetur </p>
		  <a href="#" class="btn btn-primary">BUY</a>
		</div>
	  </div>
	  <div class="card p-1 m-2" style="width: 18rem;">
		<img style="height: 350px;" src="https://contents.mediadecathlon.com/p1484240/ab565f3675dbdd7e3c486175e2c16583/p1484240.jpg" class="card-img-top" alt="...">
		<div class="card-body">
		  <h5 class="card-title">Shirt</h5>
		  <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card's content.</p>
		  <a href="#" class="btn btn-primary">Go somewhere</a>
		</div>
	  </div>
	  <div class="card p-1 m-2" style="width: 18rem;">
		<img style="height: 350px;" src="..." class="card-img-top" alt="...">
		<div class="card-body">
		  <h5 class="card-title">Card title</h5>
		  <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card's content.</p>
		  <a href="#" class="btn btn-primary">Go somewhere</a>
		</div>
	  </div>
	  <div class="card p-1 m-2" style="width: 18rem;">
		<img style="height: 350px;" src="..." class="card-img-top" alt="...">
		<div class="card-body">
		  <h5 class="card-title">Card title</h5>
		  <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card's content.</p>
		  <a href="#" class="btn btn-primary">Go somewhere</a>
		</div>
	  </div>
	  <div class="card p-1 m-2" style="width: 18rem;">
		<img style="height: 350px;" src="..." class="card-img-top" alt="...">
		<div class="card-body">
		  <h5 class="card-title">Card title</h5>
		  <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card's content.</p>
		  <a href="#" class="btn btn-primary">Go somewhere</a>
		</div>
	  </div>
  </div>

  <div data-role="footer">
    <h1>copyright amazon.in</h1>
  </div>
</div> 

<div data-role="page" id="pagetwo">
  <div data-role="header">
    <h1>Welcome To My Homepage</h1>
  </div>

  <div data-role="main" class="ui-content">
    <p>This is Page Two. If you click on the link below, it will take you to Page One.</p>
    <a href="#pageone">Go to Page One</a>
  </div>

  <div data-role="footer">
    <h1>copyright amazon.in</h1>
  </div>
</div> 
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js" integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.7/dist/umd/popper.min.js" integrity="sha384-zYPOMqeu1DAVkHiLqWBUTcbYfZ8osu1Nd6Z89ify25QV9guujx43ITvfi12/QExE" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.min.js" integrity="sha384-Y4oOpwW3duJdCWv5ly8SCFYWqFDsfob/3GkgExXKV4idmbt98QcxXYs9UoXAB7BZ" crossorigin="anonymous"></script>
</body>
</html>
