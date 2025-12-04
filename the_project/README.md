The applications is located at `/the_project` and image is pushed to `yutharsans/todo-app:latest`

1. Deploy the respective image with `kubectl create deployment todo-app-dep --image=yutharsans/todo-app:latest`
2. Verify the deployment

`kubectl get pods`

NAME                            READY   STATUS    RESTARTS        AGE
log-output-7786cff795-fprt7     1/1     Running   1 (3h50m ago)   6h56m
todo-app-dep-67655788f5-ckx4f   1/1     Running   0               91m

`kubectl get deployments`

NAME           READY   UP-TO-DATE   AVAILABLE   AGE
log-output     1/1     1            1           6h56m
todo-app-dep   1/1     1            1           95m

`kubectl logs -f todo-app-dep-67655788f5-ckx4f`

2025/12/04 16:54:40 Defaulting to port 8080
2025/12/04 16:54:40 Server started in port 8080...
