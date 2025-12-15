<template>
  <div>
    <h2>Users</h2>
    <ul>
      <li v-for="user in users" :key="user.id">
        {{ user.name }}
        <button @click="updateUser(user.id)">Update</button>
        <button @click="deleteUser(user.id)">Delete</button>
      </li>
    </ul>
    <button @click="createUser">Add User</button>
  </div>
</template>

<script setup>
import { ref, onMounted } from 'vue'

const users = ref([])

async function fetchUsers() {
  const res = await fetch('http://localhost:3000/api/users')
  const data = await res.json()
  users.value = data.users
}

async function createUser() {
  await fetch('http://localhost:3000/api/users', {
    method: 'POST',
    headers: { 'Content-Type': 'application/json' },
    body: JSON.stringify({ name: 'New User' })
  })
  fetchUsers()
}

async function updateUser(id) {
  await fetch(`http://localhost:3000/api/users/${id}`, {
    method: 'PUT',
    headers: { 'Content-Type': 'application/json' },
    body: JSON.stringify({ name: 'Updated User' })
  })
  fetchUsers()
}

async function deleteUser(id) {
  await fetch(`http://localhost:3000/api/users/${id}`, { method: 'DELETE' })
  fetchUsers()
}

onMounted(fetchUsers)
</script>
