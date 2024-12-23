from flask import Flask, request, jsonify
import requests

app = Flask(__name__)

# Nemotron API Details - REPLACE THESE
NEMOTRON_API_KEY = "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"
NEMOTRON_API_ENDPOINT = "https://integrate.api.nvidia.com/v1"

@app.route('/query', methods=['POST'])
def handle_query():
    query = request.json['query']
    # Construct API call to Nemotron
    headers = {
        'Authorization': f'Bearer {NEMOTRON_API_KEY}',
        'Content-Type': 'application/json'
    }
    params = {'query': query}  # Adjust based on Nemotron's API requirements
    try:
        response = requests.post(NEMOTRON_API_ENDPOINT, headers=headers, json=params)
        response.raise_for_status()  # Raise an exception for bad status codes
        return jsonify({'response': response.json()['answer']})  # Adjust based on Nemotron's response format
    except requests.exceptions.RequestException as err:
        return jsonify({'response': f'Error querying Nemotron: {err}'}), 500

if __name__ == '__main__':
    app.run(debug=True)
