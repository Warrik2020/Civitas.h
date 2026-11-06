#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class WeaponDoc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponDoc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "WeaponDoc") {}
    public:
        void Load(void* design, bool dirty) const { void* args[] = { design, &dirty }; Call("Load", args, 2); }
        void BeginEdit() const { Call("BeginEdit", nullptr, 0); }
        void Changed() const { Call("Changed", nullptr, 0); }
        void Undo() const { Call("Undo", nullptr, 0); }
        void Redo() const { Call("Redo", nullptr, 0); }
        void MarkSaved() const { Call("MarkSaved", nullptr, 0); }
        void SelectPart(int part) const { void* args[] = { &part }; Call("SelectPart", args, 1); }
        void SelectVertex(int part, int vertex, bool add) const { void* args[] = { &part, &vertex, &add }; Call("SelectVertex", args, 3); }
        void ToggleVertex(int part, int vertex) const { void* args[] = { &part, &vertex }; Call("ToggleVertex", args, 2); }
        void ClearVertices() const { Call("ClearVertices", nullptr, 0); }
        void Select(int part, int vertex = -1) const { void* args[] = { &part, &vertex }; Call("Select", args, 2); }
        bool IsSelected(int part, int vertex) const { void* args[] = { &part, &vertex }; return CallValue<bool>("IsSelected", args, 2); }
        void PartsWithVertices(void* into) const { void* args[] = { into }; Call("PartsWithVertices", args, 1); }
        void SelectedVerticesOf(int part, void* into) const { void* args[] = { &part, into }; Call("SelectedVerticesOf", args, 2); }
        int PrimaryPart() const { return ReadField<int>("PrimaryPart"); }
        void SetPrimaryPart(int value) const { WriteField<int>("PrimaryPart", value); }
    };
}
