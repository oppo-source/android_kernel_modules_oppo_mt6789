ccflags-y += -I$(srctree)/$(src)/include
ccflags-y += -I$(srctree)/$(src)/../test-kit
ccflags-$(CONFIG_OPLUS_PD_MANAGER_CHARGER) += -I$(srctree)/drivers/usb/typec/tcpc/inc
ccflags-$(CONFIG_OPLUS_MT6375_CHARGER) += -I$(srctree)/drivers/misc/mediatek/typec/tcpc/inc
ccflags-y += -Werror=parentheses
ccflags-y += -Werror=implicit-fallthrough
ccflags-y += -Werror=format
ccflags-y += -DOPLUS_CHG_KO_BUILD

oplus_chg_v2-y += oplus_chg_core.o
oplus_chg_v2-y += oplus_chg_gki.o
oplus_chg_v2-y += oplus_chg_voter.o
oplus_chg_v2-y += oplus_chg_wired.o
oplus_chg_v2-y += oplus_chg_comm.o
oplus_chg_v2-y += oplus_chg_vooc.o
oplus_chg_v2-y += oplus_configfs.o
oplus_chg_v2-$(CONFIG_OPLUS_CHG_DYNAMIC_CONFIG) += oplus_chg_cfg.o

ifeq ($(CONFIG_OPLUS_CHARGER_MTK),y)
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/typec/tcpc/inc
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include

ccflags-$(CONFIG_OPLUS_CHG_DYNAMIC_CONFIG) += -I$(srctree)/drivers/gpu/drm/mediatek/mediatek_v2
ccflags-$(CONFIG_OPLUS_CHARGER_MTK6895S) += -I$(srctree)/drivers/power/supply
ccflags-$(CONFIG_OPLUS_CHARGER_MTK6895S) += -I$(srctree)/drivers/gpu/drm/mediatek/mediatek_v2
ccflags-$(CONFIG_OPLUS_CHARGER_MTK6895S) += -I$(srctree)/drivers/base/kernelFwUpdate
endif

oplus_chg_v2-y += gauge_ic/oplus_hal_bq27541.o

oplus_chg_v2-y += vooc_ic/oplus_hal_rk826.o
oplus_chg_v2-y += vooc_ic/oplus_hal_op10.o

oplus_chg_v2-y += hal/oplus_chg_ic.o
oplus_chg_v2-y += hal/oplus_virtual_buck.o
oplus_chg_v2-y += hal/oplus_virtual_asic.o
oplus_chg_v2-y += hal/oplus_virtual_gauge.o
oplus_chg_v2-y += hal/oplus_hal_vooc.o

oplus_chg_v2-y += mms/oplus_mms.o
oplus_chg_v2-y += mms/oplus_mms_gauge.o
oplus_chg_v2-y += mms/oplus_mms_wired.o

oplus_chg_v2-y += strategy/oplus_strategy.o
oplus_chg_v2-y += strategy/oplus_strategy_cgcl.o

oplus_chg_v2-y += monitor/oplus_monitor_core.o
oplus_chg_v2-y += monitor/oplus_chg_track.o

oplus_chg_v2-$(CONFIG_OPLUS_DA9313_CHARGER) += charger_ic/oplus_da9313.o
oplus_chg_v2-$(CONFIG_OPLUS_ADSP_CHARGER) += charger_ic/oplus_hal_adsp.o
oplus_chg_v2-$(CONFIG_OPLUS_MP2762_CHARGER) += charger_ic/oplus_hal_mp2650.o
oplus_chg_v2-$(CONFIG_OPLUS_SGM41512_CHARGER) += charger_ic/oplus_hal_sgm41512.o
oplus_chg_v2-$(CONFIG_OPLUS_PD_MANAGER_CHARGER) += charger_ic/oplus_hal_pd_manager.o
oplus_chg_v2-$(CONFIG_OPLUS_CHARGER_MTK6895S) += charger_ic/oplus_hal_mtk6895S.o
oplus_chg_v2-$(CONFIG_OPLUS_MT6375_CHARGER) += charger_ic/oplus_hal_mt6375.o

KBUILD_LDS_MODULE_ATTACH = oplus_chg_module.lds

obj-$(CONFIG_OPLUS_CHG_V2) := oplus_chg_v2.o


# run charger script
script_dir = $(srctree)/$(src)/scripts
charger_check_list =
PHONY += $(charger_check_list)

# charger top config
chg_top_cfg_path = $(srctree)/$(src)/config
chg_top_cfg = $(chg_top_cfg_path)/oplus_chg_ic.json

# charger ic config
chg_ic_cfg_path = $(srctree)/$(src)/config/ic
chg_ic_cfg = $(chg_ic_cfg_path)/common.json
chg_ic_cfg += $(chg_ic_cfg_path)/wireless_rx.json
chg_ic_cfg += $(chg_ic_cfg_path)/buck_boost.json
chg_ic_cfg += $(chg_ic_cfg_path)/charge_pump.json
chg_ic_cfg += $(chg_ic_cfg_path)/gauge.json
chg_ic_cfg += $(chg_ic_cfg_path)/misc.json
chg_ic_cfg += $(chg_ic_cfg_path)/voocphy.json
chg_ic_cfg += $(chg_ic_cfg_path)/vooc.json

chg_ic_cfg_h = $(obj)/oplus_chg_ic_cfg.h
chg_ic_cfg_json = $(obj)/oplus_chg_ic_cfg.json
chg_ic_cfg_parse = $(script_dir)/ic_cfg_parse.py
ccflags-y += -I$(objtree)/$(obj)

sub_objtool_obj += $(objtree)/$(chg_ic_cfg_h) $(objtree)/$(chg_ic_cfg_json)

quiet_cmd_parse_chg_cfg = PARSE   $(<:$(srctree)/%=%)
      cmd_parse_chg_cfg = $(PYTHON3) $(chg_ic_cfg_parse) -hd $@ $<

quiet_cmd_merge_chg_cfg = MERGE   $(<:$(srctree)/%=%)
      cmd_merge_chg_cfg = $(PYTHON3) $(chg_ic_cfg_parse) -m $@ $<

$(objtree)/$(chg_ic_cfg_h): $(chg_top_cfg) $(chg_ic_cfg) $(chg_ic_cfg_parse)
	$(call cmd,parse_chg_cfg)

$(objtree)/$(chg_ic_cfg_json): $(chg_top_cfg) $(chg_ic_cfg) $(chg_ic_cfg_parse)
	$(call cmd,merge_chg_cfg)
