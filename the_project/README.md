The applications is located at `/the_project` and image is pushed to `yutharsans/todo-app:latest`

1. Delete the already existing deployment `kubectl delete deployment todo-app-dep`
2. Apply the declarative file `kubectl apply -f manifests/deployment.yml`
3. Verify the deployment

- `kubectl get pods`

NAME                              READY   STATUS    RESTARTS   AGE
log-output-dep-6dc95fdf8c-smkmc   1/1     Running   0          73s
todo-app-dep-7966b879f5-b2rdj     1/1     Running   0          28s

- `kubectl get deployments`

NAME             READY   UP-TO-DATE   AVAILABLE   AGE
log-output-dep   1/1     1            1           13m
todo-app-dep     1/1     1            1           48s

- `kubectl logs todo-app-dep-7966b879f5-b2rdj`

2025/12/05 07:47:10 Defaulting to port 8080
2025/12/05 07:47:10 Server started in port 8080...