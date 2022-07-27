function navigation() {
    let btn = document.getElementById('myDropdown')
    if(btn.className == "dropdown-content") btn.className = "show"
    else if(btn.className == "show") btn.className = "dropdown-content"
  }
  
  // Close the dropdown menu if the user clicks outside of it
  window.onclick = function(event) {
    if (!event.target.matches('.dropbtn')) {
      var dropdowns = document.getElementsByClassName("dropdown-content");
      var i;
      for (i = 0; i < dropdowns.length; i++) {
        var openDropdown = dropdowns[i];
        if (openDropdown.classList.contains('show')) {
          openDropdown.classList.remove('show');
        }
      }
    }
  }

  $(document).ready(function() {

    $(window).resize(function(){
        $(window).scroll(function() {
      
          if ($(document).scrollTop() > 200) 
          $("#welcome").addClass("newWelcome")

          if ($(document).scrollTop() > 200)
          $("#home-banner-img").addClass("animatedBannerImg")

          if($(document).scrollTop() > 705)
          $(".c1").addClass("animatedCard1")

          if($(document).scrollTop() > 1000)
          $(".c2").addClass("animatedCard2")
          
          if($(document).scrollTop() > 1500)
          $(".c3").addClass("animatedCard3")
        });
      
    });
  
  });