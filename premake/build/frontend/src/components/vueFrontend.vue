<template>
  <div>
    <h2>User List</h2>
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
const uri = 'http://backend:3000/api/users'
async function fetchUsers() {
const res = await fetch('http://backend:3000/api/users')  const res = await fetch('/api/users')
  users.value = await res.json()
}

async function createUser() {
  await fetch('${uri}', {
    method: 'POST',
    headers: { 'Content-Type': 'application/json' },
    body: JSON.stringify({ name: 'New User' })
  })
  fetchUsers()
}

async function updateUser(id) {
  await fetch(`${uri}/${id}`, {
    method: 'PUT',
    headers: { 'Content-Type': 'application/json' },
    body: JSON.stringify({ name: 'Updated User' })
  })
  fetchUsers()
}

async function deleteUser(id) {
  await fetch(`${uri}/${id}`, { method: 'DELETE' })
  fetchUsers()
}

onMounted(fetchUsers)
</script>
