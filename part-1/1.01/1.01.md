The applications is located at `/apps/log_output` and image is pushed to `yutharsans/log_output:latest`

1. Create a cluster with `k3d cluster create -a 1`
2. Deploy the respective image with `kubectl create deployment log-output --image=yutharsans/log_output:latest`
3. Verify the deployment

- `$ kubectl get pod`

NAME                          READY   STATUS    RESTARTS   AGE
log-output-7786cff795-fprt7   1/1     Running   0          17s

- `$ kubectl get deployment`

NAME         READY   UP-TO-DATE   AVAILABLE   AGE
log-output   1/1     1            1           27s

- `$ kubectl logs -f log-output-7786cff795-fprt7`

2025-12-04_10:14:48 myGb`aswvhSKxSQh
2025-12-04_10:14:53 myGb`aswvhSKxSQh
2025-12-04_10:14:58 myGb`aswvhSKxSQh
2025-12-04_10:15:03 myGb`aswvhSKxSQh
2025-12-04_10:15:08 myGb`aswvhSKxSQh
2025-12-04_10:15:13 myGb`aswvhSKxSQh
2025-12-04_10:15:18 myGb`aswvhSKxSQh
2025-12-04_10:15:23 myGb`aswvhSKxSQh