function comingSoon(event) {
    event.preventDefault();
    showComingSoon("This topic is currently under development...<br>Thank you for your patience.");
}

function futureUpdate(event) {
    event.preventDefault();
    showFutureUpdate("This will be available in a future update.");
}

function showComingSoon(message) {
    const oldModal = document.querySelector('.custom-modal-overlay');
    if (oldModal) oldModal.remove();

    const overlay = document.createElement('div');
    overlay.className = 'custom-modal-overlay';

    overlay.innerHTML = `
        <div class="custom-modal">
            <h3>Coming Soon</h3>
            <p>${message}</p>
            <button class="custom-modal-btn">OK</button>
        </div>
    `;

    document.body.appendChild(overlay);

    overlay.querySelector('.custom-modal-btn').addEventListener('click', () => {
        overlay.remove();
    });

    overlay.addEventListener('click', (e) => {
        if (e.target === overlay) overlay.remove();
    });
}

function showFutureUpdate(message) {
    const oldModal = document.querySelector('.custom-modal-overlay');
    if (oldModal) oldModal.remove();

    const overlay = document.createElement('div');
    overlay.className = 'custom-modal-overlay';

    overlay.innerHTML = `
        <div class="custom-modal">
            <h3>Future Updates</h3>
            <p>${message}</p>
            <button class="custom-modal-btn">OK</button>
        </div>
    `;

    document.body.appendChild(overlay);

    overlay.querySelector('.custom-modal-btn').addEventListener('click', () => {
        overlay.remove();
    });

    overlay.addEventListener('click', (e) => {
        if (e.target === overlay) overlay.remove();
    });
}