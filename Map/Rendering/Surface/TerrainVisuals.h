#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Surface
{
    class TerrainVisuals : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainVisuals(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Surface", "TerrainVisuals") {}
    public:
        void Set(bool on) const { void* args[] = { &on }; CallStatic("Set", args, 1); }
        bool DefaultOn() const { return ReadStaticField<bool>("DefaultOn"); }
        bool TintInShader() const { return ReadStaticField<bool>("TintInShader"); }
        void SetTintInShader(bool value) const { WriteStaticField<bool>("TintInShader", value); }
        bool CitiesAsTexture() const { return ReadStaticField<bool>("CitiesAsTexture"); }
        void SetCitiesAsTexture(bool value) const { WriteStaticField<bool>("CitiesAsTexture", value); }
        bool Villages() const { return ReadStaticField<bool>("Villages"); }
        void SetVillages(bool value) const { WriteStaticField<bool>("Villages", value); }
    };
}
