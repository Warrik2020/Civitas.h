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
        void Load(void* design, bool dirty) const { void* __callArgs[] = { design, &dirty }; Call("Load", __callArgs, 2); }
        void BeginEdit() const { Call("BeginEdit", nullptr, 0); }
        void Changed() const { Call("Changed", nullptr, 0); }
        void Undo() const { Call("Undo", nullptr, 0); }
        void Redo() const { Call("Redo", nullptr, 0); }
        void MarkSaved() const { Call("MarkSaved", nullptr, 0); }
        void SelectPart(int part) const { void* __callArgs[] = { &part }; Call("SelectPart", __callArgs, 1); }
        void SelectVertex(int part, int vertex, bool add) const { void* __callArgs[] = { &part, &vertex, &add }; Call("SelectVertex", __callArgs, 3); }
        void ToggleVertex(int part, int vertex) const { void* __callArgs[] = { &part, &vertex }; Call("ToggleVertex", __callArgs, 2); }
        void ClearVertices() const { Call("ClearVertices", nullptr, 0); }
        void Select(int part, int vertex = -1) const { void* __callArgs[] = { &part, &vertex }; Call("Select", __callArgs, 2); }
        bool IsSelected(int part, int vertex) const { void* __callArgs[] = { &part, &vertex }; return CallValue<bool>("IsSelected", __callArgs, 2); }
        void PartsWithVertices(void* into) const { void* __callArgs[] = { into }; Call("PartsWithVertices", __callArgs, 1); }
        void SelectedVerticesOf(int part, void* into) const { void* __callArgs[] = { &part, into }; Call("SelectedVerticesOf", __callArgs, 2); }
        int PrimaryPart() const { return ReadField<int>("PrimaryPart"); }
        void PrimaryPart(int value) const { WriteField<int>("PrimaryPart", value); }
    };
}
