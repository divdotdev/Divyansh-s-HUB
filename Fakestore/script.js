fetch("https://fakestoreapi.com/products?limit=20")
    .then(function (response) //then(res => res.json())
    {
        return response.json();
    })
    .then(function(data)
    {
        let div=document.getElementById("products");
        for(let i=0;i<data.length;i++) 
    {
            div.innerHTML+=`
        <div class="card">
          <img src="${data[i].image}">
          <h4>${data[i].title}</h4>
          <p>₹${data[i].price*98}</p>
        </div>`;}
    });