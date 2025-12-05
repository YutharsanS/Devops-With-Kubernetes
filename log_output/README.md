The applications is located at `/log_output` and image is pushed to `yutharsans/log_output:latest`

1. Delete the already existing deployment `kubectl delete deployment log-output`
2. Apply the declarative file `kubectl apply -f manifests/deployment.yml`
3. Verify the deployment

- `$ kubectl get pod`

NAME                              READY   STATUS    RESTARTS   AGE
log-output-dep-7789f86bf5-5tdgw   1/1     Running   0          13s

- `$ kubectl get deployment`

NAME                              READY   STATUS    RESTARTS   AGE
log-output-dep-7789f86bf5-5tdgw   1/1     Running   0          13s

- `kubectl logs -f log-output-dep-7789f86bf5-5tdgw`

2025-12-05_07:34:31 yE_GhgNhbcsukxUV
2025-12-05_07:34:36 yE_GhgNhbcsukxUV
2025-12-05_07:34:41 yE_GhgNhbcsukxUV
2025-12-05_07:34:46 yE_GhgNhbcsukxUV
2025-12-05_07:34:51 yE_GhgNhbcsukxUV
2025-12-05_07:34:56 yE_GhgNhbcsukxUV
