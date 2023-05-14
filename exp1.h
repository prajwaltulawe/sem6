<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Bootstrap demo</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">
    <style>
        .cointainer {
            display: flex;
            flex-direction: row;
        }

        .side-bar {
            width: 20%;
            height: 100vh;
            border-right: 2px solid rgba(0, 0, 0, 0.151);
        }

        .side-bar li {
            text-decoration: none;
            list-style-type: none;
            border-bottom: 2px solid grey;
        }

        .card-cointainer {
            display: flex;
            flex-direction: row;
        }
        .card img{
            height: 200px;
        }
    </style>
</head>

<body>

    <!-- NAVBAR -->
    <nav class="navbar navbar-expand-lg bg-body-tertiary">
        <div class="container-fluid">
            <a class="navbar-brand" href="#">ECOMMERCE</a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav"
                aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse" id="navbarNav">
                <ul class="navbar-nav">
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
            </div>
            <form class="d-flex" role="search">
                <input class="form-control me-2" type="search" placeholder="Search" aria-label="Search">
                <button class="btn btn-outline-success" type="submit">Search</button>
            </form>
        </div>
    </nav>

    <!-- BODY -->
    <div class="cointainer">
        <div class="side-bar">
            <ul class="p-0">
                <a href="http://"><li class="mt-3 p-3"> STATISTICES</li></a>
                <a href="http://"><li class="mt-3 p-3"> PRODUCTS</li></a>
                <a href="http://"><li class="mt-3 p-3"> PAYMENTS</li></a>
                <a href="http://"><li class="mt-3 p-3"> COMPLAINTS</li></a>
                <a href="http://"><li class="mt-3 p-3"> ORDERS</li></a>
                <a href="http://"><li class="mt-3 p-3"> RECEIPTS</li></a>
                <a href="http://"><li class="mt-3 p-3"> CATEGORY</li></a>
                <a href="http://"><li class="mt-3 p-3"> MAILS</li></a>
            </ul>
        </div>
        <div class="main-cointainer p-5">
            <h1>STATISTICES</h1>
            <div class="card-cointainer">

                <div class="card mx-3" style="width: 18rem;">
                    <img src="data:image/png;base64,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"
                        class="card-img-top" alt="...">
                    <div class="card-body">
                        <h2 class="card-text">SALES: 2875 (LAST MONTH)</h2>
                    </div>
                </div>
                <div class="card mx-3" style="width: 18rem;">
                    <img src="data:image/png;base64,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" class="card-img-top" alt="...">
                    <div class="card-body">
                        <h2 class="card-text"> ORDERS: 1075 (PENDING)</h2>
                    </div>
                </div>
                <div class="card mx-3" style="width: 18rem;">
                    <img src="data:image/png;base64,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" class="card-img-top" alt="...">
                    <div class="card-body">
                        <h2 class="card-text">OUT: 250 (FOR DELIVERY)</h2>
                    </div>
                </div>
                <div class="card mx-3" style="width: 18rem;">
                    <img src="https://storage.googleapis.com/support-kms-prod/rqBau46qwxybLMaNmSSZboXyXYWSe5m0crtE" class="card-img-top" alt="...">
                    <div class="card-body">
                        <h2 class="card-text">SITE VISITS (25000)</h2>
                    </div>
                </div>
            </div>

        </div>
    </div>

    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.11.7/dist/umd/popper.min.js"
        integrity="sha384-zYPOMqeu1DAVkHiLqWBUTcbYfZ8osu1Nd6Z89ify25QV9guujx43ITvfi12/QExE"
        crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.min.js"
        integrity="sha384-Y4oOpwW3duJdCWv5ly8SCFYWqFDsfob/3GkgExXKV4idmbt98QcxXYs9UoXAB7BZ"
        crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/js/bootstrap.bundle.min.js"
        integrity="sha384-ENjdO4Dr2bkBIFxQpeoTz1HIcje39Wm4jDKdf19U8gI4ddQ3GYNS7NTKfAdVQSZe"
        crossorigin="anonymous"></script>
</body>

</html>