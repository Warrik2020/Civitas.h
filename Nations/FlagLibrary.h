#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class FlagLibrary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagLibrary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "FlagLibrary") {}
    public:
        void* NameOf(int i) const { void* args[] = { &i }; return CallStatic("NameOf", args, 1); }
        void* SourceOf(int i) const { void* args[] = { &i }; return CallStatic("SourceOf", args, 1); }
        void BeginScan() const { CallStatic("BeginScan", nullptr, 0); }
        void* Art(int i) const { void* args[] = { &i }; return CallStatic("Art", args, 1); }
        void* Pixels(int i, int& w, int& h) const { void* args[] = { &i, &w, &h }; return CallStatic("Pixels", args, 3); }
        void ReleaseArt(int i) const { void* args[] = { &i }; CallStatic("ReleaseArt", args, 1); }
        void ReleaseArt() const { CallStatic("ReleaseArt", nullptr, 0); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* nation() const { return ReadField<void*>("nation"); }
        void SetNation(void* value) const { WriteField<void*>("nation", value); }
        void* source() const { return ReadField<void*>("source"); }
        void SetSource(void* value) const { WriteField<void*>("source", value); }
        void* png() const { return ReadField<void*>("png"); }
        void SetPng(void* value) const { WriteField<void*>("png", value); }
        void* tex() const { return ReadField<void*>("tex"); }
        void SetTex(void* value) const { WriteField<void*>("tex", value); }
        void* sprite() const { return ReadField<void*>("sprite"); }
        void SetSprite(void* value) const { WriteField<void*>("sprite", value); }
    };
}
