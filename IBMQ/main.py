# file: main.py
import qiskit
import cextension
 
# directly call the function
obs = cextension.build_observable()
print("SparseObservable instance?", isinstance(obs, qiskit.quantum_info.SparseObservable))
print(obs)