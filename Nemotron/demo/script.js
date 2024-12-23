document.getElementById('send-btn').addEventListener('click', function() {
    const query = document.getElementById('query-input').value;
    if (query) {
        sendQuery(query);
        document.getElementById('query-input').value = ''; // Clear input
    }
});

function sendQuery(query) {
    fetch('/query', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
        },
        body: JSON.stringify({query: query}),
    })
    .then(response => response.json())
    .then(data => {
        const chatBox = document.getElementById('chat-box');
        const responseDiv = document.createElement('div');
        responseDiv.innerHTML = `
            <b>You:</b> ${query}<br>
            <b>AI:</b> ${data.response}
        `;
        chatBox.appendChild(responseDiv);
        chatBox.scrollTop = chatBox.scrollHeight; // Scroll to the bottom
    })
    .catch((error) => {
        console.error('Error:', error);
        const chatBox = document.getElementById('chat-box');
        const errorDiv = document.createElement('div');
        errorDiv.innerHTML = `
            <b>Error:</b> Failed to retrieve response.
        `;
        chatBox.appendChild(errorDiv);
    });
}

// Optional: Press Enter to Send
document.getElementById('query-input').addEventListener('keypress', function(e) {
    if (e.key === 'Enter') {
        document.getElementById('send-btn').click();
    }
});
