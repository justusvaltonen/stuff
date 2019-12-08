
export FT_USER=$LOGNAME
groups $FT_USER | tr -d "*:" | tr " " "," | tr -d '\n'
