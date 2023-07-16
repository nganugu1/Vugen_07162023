Action()
{
	
	lr_start_transaction("T01");

	web_custom_request("web_custom_request",
		"URL=www.cars.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	lr_end_transaction("T01", LR_AUTO);

	
	return 0;
}
