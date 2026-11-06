#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateRegion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateRegion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateRegion") {}
    public:
        void ResetBounds() const { Call("ResetBounds", nullptr, 0); }
        void Cover(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("Cover", __callArgs, 2); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int originId() const { return ReadField<int>("originId"); }
        void originId(int value) const { WriteField<int>("originId", value); }
        int historic() const { return ReadField<int>("historic"); }
        void historic(int value) const { WriteField<int>("historic", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void tiles(int value) const { WriteField<int>("tiles", value); }
        int seatTile() const { return ReadField<int>("seatTile"); }
        void seatTile(int value) const { WriteField<int>("seatTile", value); }
        int minX() const { return ReadField<int>("minX"); }
        void minX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void minY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void maxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void maxY(int value) const { WriteField<int>("maxY", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        bool pinned() const { return ReadField<bool>("pinned"); }
        void pinned(bool value) const { WriteField<bool>("pinned", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void dirty(bool value) const { WriteField<bool>("dirty", value); }
        bool grewThisSweep() const { return ReadField<bool>("grewThisSweep"); }
        void grewThisSweep(bool value) const { WriteField<bool>("grewThisSweep", value); }
    };
}
